#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSlotAnimParameters(py::module &m)
{
    py::class_< FSlotAnimParameters >(m, "FSlotAnimParameters")
        .def_readwrite("SMData", &FSlotAnimParameters::SMData)
        .def_readwrite("CustomAnimDef", &FSlotAnimParameters::CustomAnimDef)
        .def_readwrite("CustomAnimName", &FSlotAnimParameters::CustomAnimName)
        .def_readwrite("PerBoneWeights", &FSlotAnimParameters::PerBoneWeights)
        .def_readwrite("TransformReqBone", &FSlotAnimParameters::TransformReqBone)
        .def_readwrite("TransformReqBoneIndex", &FSlotAnimParameters::TransformReqBoneIndex)
  ;
}