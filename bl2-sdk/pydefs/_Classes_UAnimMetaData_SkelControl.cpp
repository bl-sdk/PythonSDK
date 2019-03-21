#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimMetaData_SkelControl()
{
    py::class_< UAnimMetaData_SkelControl,  UAnimMetaData   >("UAnimMetaData_SkelControl")
        .def_readwrite("SkelControlNameList", &UAnimMetaData_SkelControl::SkelControlNameList)
        .def_readwrite("SkelControlName", &UAnimMetaData_SkelControl::SkelControlName)
        .def("StaticClass", &UAnimMetaData_SkelControl::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}