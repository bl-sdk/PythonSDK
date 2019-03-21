#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLootAttachmentData()
{
    py::class_< FLootAttachmentData >("FLootAttachmentData")
        .def_readwrite("ItemPool", &FLootAttachmentData::ItemPool)
        .def_readwrite("PoolProbability", &FLootAttachmentData::PoolProbability)
        .def_readwrite("AttachmentPointName", &FLootAttachmentData::AttachmentPointName)
  ;
}