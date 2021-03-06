/*
 * This file is part of the xTuple ERP: PostBooks Edition, a free and
 * open source Enterprise Resource Planning software suite,
 * Copyright (c) 1999-2018 by OpenMFG LLC, d/b/a xTuple.
 * It is licensed to you under the Common Public Attribution License
 * version 1.0, the full text of which (including xTuple-specific Exhibits)
 * is available at www.xtuple.com/CPAL.  By using this software, you agree
 * to be bound by its terms.
 */

#ifndef DSPCOSTEDINDENTEDBOM_H
#define DSPCOSTEDINDENTEDBOM_H

#include "dspCostedBOMBase.h"

class dspCostedIndentedBOM : public dspCostedBOMBase
{
    Q_OBJECT

public:
    dspCostedIndentedBOM(QWidget* parent = 0, const char* name = 0, Qt::WindowFlags fl = Qt::Window);

    virtual bool setParams(ParameterList &params);

public slots:
    virtual void sFillList();
};

#endif // DSPCOSTEDINDENTEDBOM_H
