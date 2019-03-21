#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDamageType()
{
    class_< UDamageType, bases< UObject >  , boost::noncopyable>("UDamageType", no_init)
        .def_readwrite("KDamageImpulse", &UDamageType::KDamageImpulse)
        .def_readwrite("KDeathVel", &UDamageType::KDeathVel)
        .def_readwrite("KDeathUpKick", &UDamageType::KDeathUpKick)
        .def_readwrite("RadialDamageImpulse", &UDamageType::RadialDamageImpulse)
        .def_readwrite("VehicleDamageScaling", &UDamageType::VehicleDamageScaling)
        .def_readwrite("VehicleMomentumScaling", &UDamageType::VehicleMomentumScaling)
        .def_readwrite("DamagedFFWaveform", &UDamageType::DamagedFFWaveform)
        .def_readwrite("KilledFFWaveform", &UDamageType::KilledFFWaveform)
        .def_readwrite("FracturedMeshDamage", &UDamageType::FracturedMeshDamage)
        .def("StaticClass", &UDamageType::StaticClass, return_value_policy< reference_existing_object >())
        .def("VehicleDamageScalingFor", &UDamageType::VehicleDamageScalingFor)
        .staticmethod("StaticClass")
  ;
}