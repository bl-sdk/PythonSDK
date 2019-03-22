#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimMetaData_SkelControlKeyFrame(py::module &m)
{
    py::class_< UAnimMetaData_SkelControlKeyFrame,  UAnimMetaData   >(m, "UAnimMetaData_SkelControlKeyFrame")
        .def_readwrite("KeyFrames", &UAnimMetaData_SkelControlKeyFrame::KeyFrames)
        .def_readwrite("SkelControlNameList", &UAnimMetaData_SkelControl::SkelControlNameList)
        .def_readwrite("SkelControlName", &UAnimMetaData_SkelControl::SkelControlName)
        .def("StaticClass", &UAnimMetaData_SkelControlKeyFrame::StaticClass, py::return_value_policy::reference)
          ;
}