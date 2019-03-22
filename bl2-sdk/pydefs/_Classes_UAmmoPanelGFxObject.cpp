#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAmmoPanelGFxObject(py::module &m)
{
    py::class_< UAmmoPanelGFxObject,  UGFxObject   >(m, "UAmmoPanelGFxObject")
        .def_readwrite("AmmoTitle", &UAmmoPanelGFxObject::AmmoTitle)
        .def_readwrite("CachedRepeater", &UAmmoPanelGFxObject::CachedRepeater)
        .def_readwrite("CachedSMG", &UAmmoPanelGFxObject::CachedSMG)
        .def_readwrite("CachedShotgun", &UAmmoPanelGFxObject::CachedShotgun)
        .def_readwrite("CachedAR", &UAmmoPanelGFxObject::CachedAR)
        .def_readwrite("CachedSniper", &UAmmoPanelGFxObject::CachedSniper)
        .def_readwrite("CachedRocket", &UAmmoPanelGFxObject::CachedRocket)
        .def_readwrite("CachedGrenade", &UAmmoPanelGFxObject::CachedGrenade)
        .def("StaticClass", &UAmmoPanelGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetHighlight", &UAmmoPanelGFxObject::SetHighlight)
        .def("SetAmmoLabels", &UAmmoPanelGFxObject::SetAmmoLabels)
        .def("SetAmmoCount", &UAmmoPanelGFxObject::SetAmmoCount)
        .def("SetAllAmmoCounts", &UAmmoPanelGFxObject::SetAllAmmoCounts)
        .def("RefreshTransientData", &UAmmoPanelGFxObject::RefreshTransientData)
        .def("SetTitle", &UAmmoPanelGFxObject::SetTitle)
        .def("Init", &UAmmoPanelGFxObject::Init)
          ;
}