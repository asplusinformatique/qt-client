/*
 * This file is part of the xTuple ERP: PostBooks Edition, a free and
 * open source Enterprise Resource Planning software suite,
 * Copyright (c) 1999-2018 by OpenMFG LLC, d/b/a xTuple.
 * It is licensed to you under the Common Public Attribution License
 * version 1.0, the full text of which (including xTuple-specific Exhibits)
 * is available at www.xtuple.com/CPAL.  By using this software, you agree
 * to be bound by its terms.
 */

#ifndef _VOUCHERCLUSTER_H
#define _VOUCHERCLUSTER_H

#include "virtualCluster.h"

class XTUPLEWIDGETS_EXPORT VoucherClusterLineEdit : public VirtualClusterLineEdit
{
    Q_OBJECT

    public:
      VoucherClusterLineEdit(QWidget*, const char* = 0);
};

class XTUPLEWIDGETS_EXPORT VoucherCluster : public VirtualCluster
{
    Q_OBJECT

    public:
      VoucherCluster(QWidget*, const char* = 0);

};

#endif
