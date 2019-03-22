#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMapObjectData(py::module &m)
{
    py::class_< FMapObjectData >(m, "FMapObjectData")
        .def_readwrite("Player", &FMapObjectData::Player)
        .def_readwrite("Vehicle", &FMapObjectData::Vehicle)
        .def_readwrite("Landmark", &FMapObjectData::Landmark)
        .def_readwrite("ClientInteractiveObject", &FMapObjectData::ClientInteractiveObject)
        .def_readwrite("WPRI", &FMapObjectData::WPRI)
        .def_readwrite("WaypointIndex", &FMapObjectData::WaypointIndex)
        .def_readwrite("CustomObjectLoc", &FMapObjectData::CustomObjectLoc)
        .def_readwrite("TransformedLocation", &FMapObjectData::TransformedLocation)
        .def_readwrite("Angle", &FMapObjectData::Angle)
        .def_readwrite("Scale", &FMapObjectData::Scale)
        .def_readwrite("AS_IconClipPath", &FMapObjectData::AS_IconClipPath)
        .def_readwrite("AS_IconClipFrame", &FMapObjectData::AS_IconClipFrame)
        .def_readwrite("AS_IconClipInnerFrame", &FMapObjectData::AS_IconClipInnerFrame)
        .def_readwrite("AS_IconPath", &FMapObjectData::AS_IconPath)
        .def_readwrite("InfoBoxTitle", &FMapObjectData::InfoBoxTitle)
        .def_readwrite("InfoBoxDesc", &FMapObjectData::InfoBoxDesc)
  ;
}