#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_ClothingMaxDistanceScale(py::module &m)
{
    py::class_< UAnimNotify_ClothingMaxDistanceScale,  UAnimNotify   >(m, "UAnimNotify_ClothingMaxDistanceScale")
        .def_readwrite("StartScale", &UAnimNotify_ClothingMaxDistanceScale::StartScale)
        .def_readwrite("EndScale", &UAnimNotify_ClothingMaxDistanceScale::EndScale)
        .def_readwrite("ScaleMode", &UAnimNotify_ClothingMaxDistanceScale::ScaleMode)
        .def_readwrite("Duration", &UAnimNotify_ClothingMaxDistanceScale::Duration)
          ;
}