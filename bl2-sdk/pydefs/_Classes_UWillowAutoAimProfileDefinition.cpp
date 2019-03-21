#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAutoAimProfileDefinition()
{
    class_< UWillowAutoAimProfileDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWillowAutoAimProfileDefinition", no_init)
        .def_readwrite("MagnetismMin", &UWillowAutoAimProfileDefinition::MagnetismMin)
        .def_readwrite("MagnetismMax", &UWillowAutoAimProfileDefinition::MagnetismMax)
        .def_readwrite("MaxRotationH", &UWillowAutoAimProfileDefinition::MaxRotationH)
        .def_readwrite("MaxRotationV", &UWillowAutoAimProfileDefinition::MaxRotationV)
        .def_readwrite("LockStrengthH", &UWillowAutoAimProfileDefinition::LockStrengthH)
        .def_readwrite("LockStrengthV", &UWillowAutoAimProfileDefinition::LockStrengthV)
        .def("StaticClass", &UWillowAutoAimProfileDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}