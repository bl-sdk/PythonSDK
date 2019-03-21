#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetVehicleSimObject()
{
    py::class_< UBehavior_SetVehicleSimObject,  UBehaviorBase   >("UBehavior_SetVehicleSimObject")
        .def_readwrite("SimObjTemplate", &UBehavior_SetVehicleSimObject::SimObjTemplate)
        .def("StaticClass", &UBehavior_SetVehicleSimObject::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetVehicleSimObject::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}