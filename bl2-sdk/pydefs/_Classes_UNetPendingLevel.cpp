#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNetPendingLevel()
{
    class_< UNetPendingLevel, bases< UPendingLevel >  , boost::noncopyable>("UNetPendingLevel", no_init)
        .def("StaticClass", &UNetPendingLevel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}