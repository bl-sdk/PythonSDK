#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDamageable(py::module &m)
{
    py::class_< UIDamageable,  UInterface   >(m, "UIDamageable")
		.def_static("StaticClass", &UIDamageable::StaticClass, py::return_value_policy::reference)
        .def("GetDamageSurfaceTypeFromHit", &UIDamageable::GetDamageSurfaceTypeFromHit)
        .def("GetIntrinsicArmor", &UIDamageable::GetIntrinsicArmor)
        .def("ShieldAbsorbedAmmo", &UIDamageable::ShieldAbsorbedAmmo)
        .def("OnShieldDepleted", &UIDamageable::OnShieldDepleted)
        .def("SetShieldStrength", &UIDamageable::SetShieldStrength)
        .def("GetMaxShieldStrength", &UIDamageable::GetMaxShieldStrength)
        .def("GetShieldStrength", &UIDamageable::GetShieldStrength)
        .def("NotifyDamageTaken", &UIDamageable::NotifyDamageTaken)
          ;
}