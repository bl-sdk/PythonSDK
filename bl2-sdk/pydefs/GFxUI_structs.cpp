#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_GFxUI_structs(py::module &m)
{
    py::class_< FSoundThemeBinding >(m, "FSoundThemeBinding")
        .def_readwrite("ThemeName", &FSoundThemeBinding::ThemeName)
        .def_readwrite("Theme", &FSoundThemeBinding::Theme)
  ;
    py::class_< FASValue >(m, "FASValue")
		.def_property("B", [](FASValue &self){return self.B;}, [](FASValue &self, bool value){self.B = value ? 1 : 0;})
        .def_readwrite("Type", &FASValue::Type)
        .def_readwrite("N", &FASValue::N)
        .def_readwrite("S", &FASValue::S)
  ;
    py::class_< FGFxWidgetBinding >(m, "FGFxWidgetBinding")
        .def_readwrite("WidgetName", &FGFxWidgetBinding::WidgetName)
        .def_readwrite("WidgetClass", &FGFxWidgetBinding::WidgetClass)
  ;
    py::class_< FGFxDataStoreBinding >(m, "FGFxDataStoreBinding")
		.def_property("bEditable", [](FGFxDataStoreBinding &self){return self.bEditable;}, [](FGFxDataStoreBinding &self, bool value){self.bEditable = value ? 1 : 0;})
        .def_readwrite("DataSource", &FGFxDataStoreBinding::DataSource)
        .def_readwrite("VarPath", &FGFxDataStoreBinding::VarPath)
        .def_readwrite("ModelId", &FGFxDataStoreBinding::ModelId)
        .def_readwrite("ControlId", &FGFxDataStoreBinding::ControlId)
        .def_readwrite("CellTags", &FGFxDataStoreBinding::CellTags)
        .def_readwrite("ModelIdUtf8", &FGFxDataStoreBinding::ModelIdUtf8)
        .def_readwrite("ControlIdUtf8", &FGFxDataStoreBinding::ControlIdUtf8)
        .def_readwrite("ListDataProvider", &FGFxDataStoreBinding::ListDataProvider)
        .def_readwrite("FullCellTags", &FGFxDataStoreBinding::FullCellTags)
        .def_readwrite("ModelRef", &FGFxDataStoreBinding::ModelRef)
        .def_readwrite("ControlRef", &FGFxDataStoreBinding::ControlRef)
  ;
    py::class_< FExternalTexture >(m, "FExternalTexture")
        .def_readwrite("Resource", &FExternalTexture::Resource)
        .def_readwrite("Texture", &FExternalTexture::Texture)
  ;
    py::class_< FASDisplayInfo >(m, "FASDisplayInfo")
		.def_property("Visible", [](FASDisplayInfo &self){return self.Visible;}, [](FASDisplayInfo &self, bool value){self.Visible = value ? 1 : 0;})
		.def_property("hasX", [](FASDisplayInfo &self){return self.hasX;}, [](FASDisplayInfo &self, bool value){self.hasX = value ? 1 : 0;})
		.def_property("hasY", [](FASDisplayInfo &self){return self.hasY;}, [](FASDisplayInfo &self, bool value){self.hasY = value ? 1 : 0;})
		.def_property("hasZ", [](FASDisplayInfo &self){return self.hasZ;}, [](FASDisplayInfo &self, bool value){self.hasZ = value ? 1 : 0;})
		.def_property("hasRotation", [](FASDisplayInfo &self){return self.hasRotation;}, [](FASDisplayInfo &self, bool value){self.hasRotation = value ? 1 : 0;})
		.def_property("hasXRotation", [](FASDisplayInfo &self){return self.hasXRotation;}, [](FASDisplayInfo &self, bool value){self.hasXRotation = value ? 1 : 0;})
		.def_property("hasYRotation", [](FASDisplayInfo &self){return self.hasYRotation;}, [](FASDisplayInfo &self, bool value){self.hasYRotation = value ? 1 : 0;})
		.def_property("hasXScale", [](FASDisplayInfo &self){return self.hasXScale;}, [](FASDisplayInfo &self, bool value){self.hasXScale = value ? 1 : 0;})
		.def_property("hasYScale", [](FASDisplayInfo &self){return self.hasYScale;}, [](FASDisplayInfo &self, bool value){self.hasYScale = value ? 1 : 0;})
		.def_property("hasZScale", [](FASDisplayInfo &self){return self.hasZScale;}, [](FASDisplayInfo &self, bool value){self.hasZScale = value ? 1 : 0;})
		.def_property("hasAlpha", [](FASDisplayInfo &self){return self.hasAlpha;}, [](FASDisplayInfo &self, bool value){self.hasAlpha = value ? 1 : 0;})
		.def_property("hasVisible", [](FASDisplayInfo &self){return self.hasVisible;}, [](FASDisplayInfo &self, bool value){self.hasVisible = value ? 1 : 0;})
        .def_readwrite("X", &FASDisplayInfo::X)
        .def_readwrite("Y", &FASDisplayInfo::Y)
        .def_readwrite("Z", &FASDisplayInfo::Z)
        .def_readwrite("Rotation", &FASDisplayInfo::Rotation)
        .def_readwrite("XRotation", &FASDisplayInfo::XRotation)
        .def_readwrite("YRotation", &FASDisplayInfo::YRotation)
        .def_readwrite("XScale", &FASDisplayInfo::XScale)
        .def_readwrite("YScale", &FASDisplayInfo::YScale)
        .def_readwrite("ZScale", &FASDisplayInfo::ZScale)
        .def_readwrite("Alpha", &FASDisplayInfo::Alpha)
  ;
    py::class_< FASColorTransform >(m, "FASColorTransform")
        .def_readwrite("Multiply", &FASColorTransform::Multiply)
        .def_readwrite("Add", &FASColorTransform::Add)
  ;
    py::class_< FEventData >(m, "FEventData")
        .def_readwrite("Type", &FEventData::Type)
        .def_readwrite("Data", &FEventData::Data)
        .def_readwrite("mouseIndex", &FEventData::mouseIndex)
        .def_readwrite("Button", &FEventData::Button)
        .def_readwrite("Index", &FEventData::Index)
        .def_readwrite("lastIndex", &FEventData::lastIndex)
        .def_readwrite("controllerIdx", &FEventData::controllerIdx)
  ;
    py::class_< FGCReference >(m, "FGCReference")
        .def_readwrite("m_object", &FGCReference::m_object)
        .def_readwrite("m_count", &FGCReference::m_count)
        .def_readwrite("m_statid", &FGCReference::m_statid)
  ;
    py::class_< FAkEventResolver >(m, "FAkEventResolver")
        .def_readwrite("Interaction", &FAkEventResolver::Interaction)
        .def_readwrite("AkEvent", &FAkEventResolver::AkEvent)
  ;

}