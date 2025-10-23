#pragma once
#include <exception>
#include <string>

class CustomError : public std::exception {
private:
    std::string message_;
public:
    explicit CustomError(const std::string &message);
    ~CustomError() override = default;

    const char* what() const noexcept override;
};