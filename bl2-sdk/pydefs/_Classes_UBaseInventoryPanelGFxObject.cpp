#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBaseInventoryPanelGFxObject(py::object m)
{
    py::class_< UBaseInventoryPanelGFxObject,  UGFxObject   >(m, "UBaseInventoryPanelGFxObject")
        .def_readwrite("HandleRollOverArgs", &UBaseInventoryPanelGFxObject::HandleRollOverArgs)
        .def_readwrite("CellObjects", &UBaseInventoryPanelGFxObject::CellObjects)
        .def_readwrite("EmptyWidgetObjects", &UBaseInventoryPanelGFxObject::EmptyWidgetObjects)
        .def_readwrite("ParentPanel", &UBaseInventoryPanelGFxObject::ParentPanel)
        .def_readwrite("OwningMovie", &UBaseInventoryPanelGFxObject::OwningMovie)
        .def_readwrite("OwningMovieDef", &UBaseInventoryPanelGFxObject::OwningMovieDef)
        .def("StaticClass", &UBaseInventoryPanelGFxObject::StaticClass, py::return_value_policy::reference)
        .def("handleRollOver", &UBaseInventoryPanelGFxObject::handleRollOver)
        .def("handleRollOver2", &UBaseInventoryPanelGFxObject::handleRollOver2)
        .def("handleRollOver3", &UBaseInventoryPanelGFxObject::handleRollOver3)
        .def("handleRollOver4", &UBaseInventoryPanelGFxObject::handleRollOver4)
        .def("handleRollOver5", &UBaseInventoryPanelGFxObject::handleRollOver5)
        .def("handleRollOver6", &UBaseInventoryPanelGFxObject::handleRollOver6)
        .def("handleRollOver7", &UBaseInventoryPanelGFxObject::handleRollOver7)
        .def("handleRollOver8", &UBaseInventoryPanelGFxObject::handleRollOver8)
        .def("handleRollOver9", &UBaseInventoryPanelGFxObject::handleRollOver9)
        .def("handleRollOver_Generic", &UBaseInventoryPanelGFxObject::handleRollOver_Generic)
        .def("RedirectRollOver", &UBaseInventoryPanelGFxObject::RedirectRollOver)
        .def("FlourishActiveCell", &UBaseInventoryPanelGFxObject::FlourishActiveCell)
        .def("OnStartDrag", &UBaseInventoryPanelGFxObject::OnStartDrag)
        .def("extStartDrag", &UBaseInventoryPanelGFxObject::extStartDrag, py::return_value_policy::reference)
        .def("OnSettingPanelForTransferring", &UBaseInventoryPanelGFxObject::OnSettingPanelForTransferring)
        .def("extOnSetActive", &UBaseInventoryPanelGFxObject::extOnSetActive)
        .def("SetActive", &UBaseInventoryPanelGFxObject::SetActive)
        .def("InspectItem", &UBaseInventoryPanelGFxObject::InspectItem)
        .def("GetSelectedThing", &UBaseInventoryPanelGFxObject::GetSelectedThing, py::return_value_policy::reference)
        .def("PanelOnInputKey", &UBaseInventoryPanelGFxObject::PanelOnInputKey)
        .def("Init", &UBaseInventoryPanelGFxObject::Init)
          ;
}