#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIDamageable()
{
    class_< UIDamageable, bases< UInterface >  , boost::noncopyable>("UIDamageable", no_init)
        .def("StaticClass", &UIDamageable::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDamageSurfaceTypeFromHit", &UIDamageable::GetDamageSurfaceTypeFromHit)
        .def("GetIntrinsicArmor", &UIDamageable::GetIntrinsicArmor)
        .def("ShieldAbsorbedAmmo", &UIDamageable::ShieldAbsorbedAmmo)
        .def("OnShieldDepleted", &UIDamageable::OnShieldDepleted)
        .def("SetShieldStrength", &UIDamageable::SetShieldStrength)
        .def("GetMaxShieldStrength", &UIDamageable::GetMaxShieldStrength)
        .def("GetShieldStrength", &UIDamageable::GetShieldStrength)
        .def("NotifyDamageTaken", &UIDamageable::NotifyDamageTaken)
        .staticmethod("StaticClass")
  ;
}