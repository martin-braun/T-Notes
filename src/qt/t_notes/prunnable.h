// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2021 The T-Notes developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef T_Notes_CORE_NEW_GUI_PRUNNABLE_H
#define T_Notes_CORE_NEW_GUI_PRUNNABLE_H

class Runnable {
public:
    virtual void run(int type) = 0;
    virtual void onError(QString error, int type) = 0;
};

#endif //T_Notes_CORE_NEW_GUI_PRUNNABLE_H
