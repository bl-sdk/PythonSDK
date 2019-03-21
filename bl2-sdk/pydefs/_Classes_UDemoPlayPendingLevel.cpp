#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDemoPlayPendingLevel()
{
    class_< UDemoPlayPendingLevel, bases< UPendingLevel >  , boost::noncopyable>("UDemoPlayPendingLevel", no_init)
        .def("StaticClass", &UDemoPlayPendingLevel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}