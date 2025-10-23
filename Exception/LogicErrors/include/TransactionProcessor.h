#ifndef TRANSACTIONPROCESSOR_H
#define TRANSACTIONPROCESSOR_H

#include "Calculator.h"

class TransactionProcessor {
public:
    TransactionProcessor() = default;
    ~TransactionProcessor() = default;

    void runOperations();
};

#endif
