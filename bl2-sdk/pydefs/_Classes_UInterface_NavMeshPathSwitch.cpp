#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterface_NavMeshPathSwitch()
{
    class_< UInterface_NavMeshPathSwitch, bases< UInterface_NavMeshPathObject >  , boost::noncopyable>("UInterface_NavMeshPathSwitch", no_init)
        .def("StaticClass", &UInterface_NavMeshPathSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventAIActivateSwitch", &UInterface_NavMeshPathSwitch::eventAIActivateSwitch)
        .staticmethod("StaticClass")
  ;
}