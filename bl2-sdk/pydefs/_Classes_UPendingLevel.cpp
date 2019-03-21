#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPendingLevel()
{
    class_< UPendingLevel, bases< ULevelBase >  , boost::noncopyable>("UPendingLevel", no_init)
        .def_readonly("UnknownData00", &UPendingLevel::UnknownData00)
        .def("StaticClass", &UPendingLevel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}