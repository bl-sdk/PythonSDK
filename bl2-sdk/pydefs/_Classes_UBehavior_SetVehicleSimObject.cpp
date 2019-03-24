#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetVehicleSimObject(py::module &m)
{
    py::class_< UBehavior_SetVehicleSimObject,  UBehaviorBase   >(m, "UBehavior_SetVehicleSimObject")
		.def_static("StaticClass", &UBehavior_SetVehicleSimObject::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SimObjTemplate", &UBehavior_SetVehicleSimObject::SimObjTemplate)
        .def("ApplyBehaviorToContext", &UBehavior_SetVehicleSimObject::ApplyBehaviorToContext)
          ;
}