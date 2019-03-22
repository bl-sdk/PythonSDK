#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhaseLockDefinition(py::module &m)
{
    py::class_< UPhaseLockDefinition,  UGBXDefinition   >(m, "UPhaseLockDefinition")
        .def_readwrite("DropTime", &UPhaseLockDefinition::DropTime)
        .def_readwrite("HeightFromGround", &UPhaseLockDefinition::HeightFromGround)
        .def_readwrite("CanPlayDropAnims", &UPhaseLockDefinition::CanPlayDropAnims)
        .def_readwrite("LiftAnim", &UPhaseLockDefinition::LiftAnim)
        .def_readwrite("LoopAnim", &UPhaseLockDefinition::LoopAnim)
        .def_readwrite("DropAnim", &UPhaseLockDefinition::DropAnim)
        .def_readwrite("LandAnim", &UPhaseLockDefinition::LandAnim)
          ;
}