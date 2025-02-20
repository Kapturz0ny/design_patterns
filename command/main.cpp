#include <iostream>
#include <memory>

// Interfejs dla poleceń
class Command {
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
    virtual void undo() = 0;
};

// Klasa odbiorcy (Receiver) - Światło
class Light {
public:
    void on() {
        std::cout << "Light is ON" << std::endl;
    }
    void off() {
        std::cout << "Light is OFF" << std::endl;
    }
};

// Klasa odbiorcy (Receiver) - Telewizor
class TV {
public:
    void on() {
        std::cout << "TV is ON" << std::endl;
    }
    void off() {
        std::cout << "TV is OFF" << std::endl;
    }
};

// Konkretne polecenie - włączanie światła
class LightOnCommand : public Command {
private:
    Light& light_;
public:
    LightOnCommand(Light& light) : light_(light) {}
    void execute() override {
        light_.on();
    }
    void undo() override {
        light_.off();
    }
};

// Konkretne polecenie - wyłączanie światła
class LightOffCommand : public Command {
private:
    Light& light_;
public:
    LightOffCommand(Light& light) : light_(light) {}
    void execute() override {
        light_.off();
    }
    void undo() override {
        light_.on();
    }
};

// Konkretne polecenie - włączanie TV
class TVOnCommand : public Command {
private:
    TV& tv_;
public:
    TVOnCommand(TV& tv) : tv_(tv) {}
    void execute() override {
        tv_.on();
    }
    void undo() override {
        tv_.off();
    }
};

// Konkretne polecenie - wyłączanie TV
class TVOffCommand : public Command {
private:
    TV& tv_;
public:
    TVOffCommand(TV& tv) : tv_(tv) {}
    void execute() override {
        tv_.off();
    }
    void undo() override {
        tv_.on();
    }
};

// Klasa Invoker (Pilot)
class RemoteControl {
private:
    std::unique_ptr<Command> command_;
public:
    void setCommand(std::unique_ptr<Command> command) {
        command_ = std::move(command);
    }

    void pressButton() {
        if (command_) command_->execute();
    }

    void pressUndo() {
        if (command_) command_->undo();
    }
};

int main() {
    Light light;
    TV tv;

    RemoteControl remote;

    // Włączamy światło
    remote.setCommand(std::make_unique<LightOnCommand>(light));
    remote.pressButton();  // Wyjście: "Light is ON"
    remote.pressUndo();    // Wyjście: "Light is OFF"

    // Wyłączamy TV
    remote.setCommand(std::make_unique<TVOffCommand>(tv));
    remote.pressButton();  // Wyjście: "TV is OFF"
    remote.pressUndo();    // Wyjście: "TV is ON"

    return 0;
}
