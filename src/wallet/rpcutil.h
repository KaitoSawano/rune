// Copyright (c) 2026 The Runecash Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Utility functions for RPC commands
 */
#ifndef RUNECASH_WALLET_UTIL_H
#define RUNECASH_WALLET_UTIL_H

#include "fs.h"
#include "util.h"

fs::path GetBackupDirFromInput(std::string strUserFilename);

#endif // RUNECASH_WALLET_UTIL_H
