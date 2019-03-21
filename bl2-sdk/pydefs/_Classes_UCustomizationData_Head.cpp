#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationData_Head(py::object m)
{
    py::class_< UCustomizationData_Head,  UCustomizationData   >(m, "UCustomizationData_Head")
        .def_readwrite("HeadMesh", &UCustomizationData_Head::HeadMesh)
        .def_readwrite("InstanceDataName", &UCustomizationData_Head::InstanceDataName)
        .def("StaticClass", &UCustomizationData_Head::StaticClass, py::return_value_policy::reference)
        .def("ApplyCustomizationToInstanceDataSet", &UCustomizationData_Head::ApplyCustomizationToInstanceDataSet)
          ;
}