#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAmmoPanelGFxObject()
{
    class_< UAmmoPanelGFxObject, bases< UGFxObject >  , boost::noncopyable>("UAmmoPanelGFxObject", no_init)
        .def_readwrite("AmmoTitle", &UAmmoPanelGFxObject::AmmoTitle)
        .def_readwrite("CachedRepeater", &UAmmoPanelGFxObject::CachedRepeater)
        .def_readwrite("CachedSMG", &UAmmoPanelGFxObject::CachedSMG)
        .def_readwrite("CachedShotgun", &UAmmoPanelGFxObject::CachedShotgun)
        .def_readwrite("CachedAR", &UAmmoPanelGFxObject::CachedAR)
        .def_readwrite("CachedSniper", &UAmmoPanelGFxObject::CachedSniper)
        .def_readwrite("CachedRocket", &UAmmoPanelGFxObject::CachedRocket)
        .def_readwrite("CachedGrenade", &UAmmoPanelGFxObject::CachedGrenade)
        .def("StaticClass", &UAmmoPanelGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetHighlight", &UAmmoPanelGFxObject::SetHighlight)
        .def("SetAmmoLabels", &UAmmoPanelGFxObject::SetAmmoLabels)
        .def("SetAmmoCount", &UAmmoPanelGFxObject::SetAmmoCount)
        .def("SetAllAmmoCounts", &UAmmoPanelGFxObject::SetAllAmmoCounts)
        .def("RefreshTransientData", &UAmmoPanelGFxObject::RefreshTransientData)
        .def("SetTitle", &UAmmoPanelGFxObject::SetTitle)
        .def("Init", &UAmmoPanelGFxObject::Init)
        .staticmethod("StaticClass")
  ;
}