#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UItemCardGFxObject()
{
    class_< UItemCardGFxObject, bases< UGFxObject >  , boost::noncopyable>("UItemCardGFxObject", no_init)
        .def("StaticClass", &UItemCardGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetVisible_", &UItemCardGFxObject::SetVisible_)
        .def("SetBackgroundStyle", &UItemCardGFxObject::SetBackgroundStyle)
        .def("SetCardUIStats", &UItemCardGFxObject::SetCardUIStats)
        .def("AdjustHeight", &UItemCardGFxObject::AdjustHeight)
        .def("SetHeight", &UItemCardGFxObject::SetHeight)
        .def("SetLevelRequirement", &UItemCardGFxObject::SetLevelRequirement)
        .def("ToggleCreditsSpinner", &UItemCardGFxObject::ToggleCreditsSpinner)
        .def("SetEridiumValue", &UItemCardGFxObject::SetEridiumValue)
        .def("SetValue", &UItemCardGFxObject::SetValue)
        .def("SetFunStats", &UItemCardGFxObject::SetFunStats)
        .def("SetTopStat", &UItemCardGFxObject::SetTopStat)
        .def("SetTitle", &UItemCardGFxObject::SetTitle)
        .def("SetItemCardEx", &UItemCardGFxObject::SetItemCardEx)
        .def("eventSetItemCard", &UItemCardGFxObject::eventSetItemCard)
        .def("Init", &UItemCardGFxObject::Init)
        .staticmethod("StaticClass")
  ;
}