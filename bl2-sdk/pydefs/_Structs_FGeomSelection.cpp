#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGeomSelection()
{
    class_< FGeomSelection >("FGeomSelection", no_init)
        .def_readwrite("Type", &FGeomSelection::Type)
        .def_readwrite("Index", &FGeomSelection::Index)
        .def_readwrite("SelectionIndex", &FGeomSelection::SelectionIndex)
  ;
}