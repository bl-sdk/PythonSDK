#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FContentState()
{
    class_< FContentState >("FContentState", no_init)
        .def_readwrite("LicensedMask", &FContentState::LicensedMask)
        .def_readwrite("InstalledMask", &FContentState::InstalledMask)
  ;
}