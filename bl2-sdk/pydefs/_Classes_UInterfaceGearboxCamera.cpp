#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterfaceGearboxCamera()
{
    class_< UInterfaceGearboxCamera, bases< UInterface >  , boost::noncopyable>("UInterfaceGearboxCamera", no_init)
        .def("StaticClass", &UInterfaceGearboxCamera::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventFinishCameraLookAt", &UInterfaceGearboxCamera::eventFinishCameraLookAt)
        .def("EnableThirdPersonLookAt", &UInterfaceGearboxCamera::EnableThirdPersonLookAt)
        .def("BeginCameraLookAt", &UInterfaceGearboxCamera::BeginCameraLookAt)
        .staticmethod("StaticClass")
  ;
}