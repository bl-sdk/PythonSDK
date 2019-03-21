#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPhaseLockDefinition()
{
    class_< UPhaseLockDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UPhaseLockDefinition", no_init)
        .def_readwrite("DropTime", &UPhaseLockDefinition::DropTime)
        .def_readwrite("HeightFromGround", &UPhaseLockDefinition::HeightFromGround)
        .def_readwrite("CanPlayDropAnims", &UPhaseLockDefinition::CanPlayDropAnims)
        .def_readwrite("LiftAnim", &UPhaseLockDefinition::LiftAnim)
        .def_readwrite("LoopAnim", &UPhaseLockDefinition::LoopAnim)
        .def_readwrite("DropAnim", &UPhaseLockDefinition::DropAnim)
        .def_readwrite("LandAnim", &UPhaseLockDefinition::LandAnim)
        .def("StaticClass", &UPhaseLockDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}