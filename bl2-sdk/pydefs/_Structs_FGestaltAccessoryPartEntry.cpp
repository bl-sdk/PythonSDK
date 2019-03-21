#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltAccessoryPartEntry()
{
    class_< FGestaltAccessoryPartEntry >("FGestaltAccessoryPartEntry", no_init)
        .def_readwrite("PartName", &FGestaltAccessoryPartEntry::PartName)
        .def_readwrite("BoneName", &FGestaltAccessoryPartEntry::BoneName)
        .def_readwrite("MatrixIndex", &FGestaltAccessoryPartEntry::MatrixIndex)
  ;
}