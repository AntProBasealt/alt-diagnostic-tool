/***********************************************************************************************************************
**
** Copyright (C) 2022 BaseALT Ltd. <org@basealt.ru>
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the GNU General Public License
** as published by the Free Software Foundation; either version 2
** of the License, or (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**
***********************************************************************************************************************/

#include "finishwizardpage.h"
#include "adtwizard.h"
#include "ui_finishwizardpage.h"

#include <QPushButton>

FinishWizardPage::FinishWizardPage(QWidget *parent)
    : QWizardPage(parent)
    , ui(new Ui::FinishWizardPage)
{
    ui->setupUi(this);
}

FinishWizardPage::~FinishWizardPage()
{
    delete ui;
}

void FinishWizardPage::initializePage()
{
    wizard()->button(QWizard::CancelButton)->setEnabled(false);
}

void FinishWizardPage::saveButtonPressed(int currentPage)
{
    if (currentPage == ADTWizard::Finish_Page)
    {

    }
}
