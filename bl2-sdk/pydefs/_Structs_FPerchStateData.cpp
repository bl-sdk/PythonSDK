#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPerchStateData()
{
    class_< FPerchStateData >("FPerchStateData", no_init)
        .def_readwrite("AttachmentName", &FPerchStateData::AttachmentName)
        .def_readwrite("StaticMesh", &FPerchStateData::StaticMesh)
        .def_readwrite("SkelMesh", &FPerchStateData::SkelMesh)
        .def_readwrite("LocOffset", &FPerchStateData::LocOffset)
        .def_readwrite("RotOffset", &FPerchStateData::RotOffset)
        .def_readwrite("Scale", &FPerchStateData::Scale)
        .def_readwrite("Actor", &FPerchStateData::Actor)
  ;
}