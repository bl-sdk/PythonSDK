#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLootAttachmentData()
{
    class_< FLootAttachmentData >("FLootAttachmentData", no_init)
        .def_readwrite("ItemPool", &FLootAttachmentData::ItemPool)
        .def_readwrite("PoolProbability", &FLootAttachmentData::PoolProbability)
        .def_readwrite("AttachmentPointName", &FLootAttachmentData::AttachmentPointName)
  ;
}