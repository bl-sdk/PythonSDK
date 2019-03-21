#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSlotAnimParameters()
{
    class_< FSlotAnimParameters >("FSlotAnimParameters", no_init)
        .def_readwrite("SMData", &FSlotAnimParameters::SMData)
        .def_readwrite("CustomAnimDef", &FSlotAnimParameters::CustomAnimDef)
        .def_readwrite("CustomAnimName", &FSlotAnimParameters::CustomAnimName)
        .def_readwrite("PerBoneWeights", &FSlotAnimParameters::PerBoneWeights)
        .def_readwrite("TransformReqBone", &FSlotAnimParameters::TransformReqBone)
        .def_readwrite("TransformReqBoneIndex", &FSlotAnimParameters::TransformReqBoneIndex)
  ;
}