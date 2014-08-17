/*
 * EDA4U - Professional EDA for everyone!
 * Copyright (C) 2013 Urban Bruhin
 * http://eda4u.ubruhin.ch/
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBRARY_LIBRARYBASEELEMENT_H
#define LIBRARY_LIBRARYBASEELEMENT_H

/*****************************************************************************************
 *  Includes
 ****************************************************************************************/

#include <QObject>

/*****************************************************************************************
 *  Forward Declarations
 ****************************************************************************************/

class Workspace;

/*****************************************************************************************
 *  Class LibraryBaseElement
 ****************************************************************************************/

namespace library {

/**
 * @brief The LibraryBaseElement class
 */
class LibraryBaseElement : public QObject
{
        Q_OBJECT

    public:

        // Constructors / Destructor
        explicit LibraryBaseElement(Workspace* workspace, const QString& xmlFilename,
                                const QString& xmlRootNodeName);
        virtual ~LibraryBaseElement();

    protected:

        // General
        Workspace* mWorkspace;
        QString mXmlFilename;

    private:

        // make some methods inaccessible...
        LibraryBaseElement();
        LibraryBaseElement(const LibraryBaseElement& other);
        LibraryBaseElement& operator=(const LibraryBaseElement& rhs);
};

} // namespace library

#endif // LIBRARY_LIBRARYBASEELEMENT_H