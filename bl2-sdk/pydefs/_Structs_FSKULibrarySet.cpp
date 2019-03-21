#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSKULibrarySet()
{
    class_< FSKULibrarySet >("FSKULibrarySet", no_init)
        .def_readwrite("Id", &FSKULibrarySet::Id)
        .def_readwrite("NameID", &FSKULibrarySet::NameID)
        .def_readwrite("LibrarySetPackage", &FSKULibrarySet::LibrarySetPackage)
        .def_readwrite("CachedDlcALDefRef", &FSKULibrarySet::CachedDlcALDefRef)
  ;
}