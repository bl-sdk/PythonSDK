#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxCheatManager()
{
    class_< UGearboxCheatManager, bases< UCheatManager >  , boost::noncopyable>("UGearboxCheatManager", no_init)
        .def("StaticClass", &UGearboxCheatManager::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}