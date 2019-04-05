#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_GFxUI_structs(py::module &m)
{
	py::class_< FSoundThemeBinding >(m, "FSoundThemeBinding")
		.def_readwrite("ThemeName", &FSoundThemeBinding::ThemeName, py::return_value_policy::reference)
		.def_readwrite("Theme", &FSoundThemeBinding::Theme, py::return_value_policy::reference)
		;
	py::class_< FASValue >(m, "FASValue")
		.def_property("B", [](FASValue &self){return self.B;}, [](FASValue &self, bool value){self.B = value ? 1 : 0;})
		.def_readwrite("Type", &FASValue::Type)
		.def_readwrite("N", &FASValue::N)
		.def_readwrite("S", &FASValue::S, py::return_value_policy::reference)
		;
	py::class_< FGFxWidgetBinding >(m, "FGFxWidgetBinding")
		.def_readwrite("WidgetName", &FGFxWidgetBinding::WidgetName, py::return_value_policy::reference)
		.def_readwrite("WidgetClass", &FGFxWidgetBinding::WidgetClass, py::return_value_policy::reference)
		;
	py::class_< FGFxDataStoreBinding >(m, "FGFxDataStoreBinding")
		.def_property("bEditable", [](FGFxDataStoreBinding &self){return self.bEditable;}, [](FGFxDataStoreBinding &self, bool value){self.bEditable = value ? 1 : 0;})
		.def_readwrite("DataSource", &FGFxDataStoreBinding::DataSource, py::return_value_policy::reference)
		.def_readwrite("VarPath", &FGFxDataStoreBinding::VarPath, py::return_value_policy::reference)
		.def_readwrite("ModelId", &FGFxDataStoreBinding::ModelId, py::return_value_policy::reference)
		.def_readwrite("ControlId", &FGFxDataStoreBinding::ControlId, py::return_value_policy::reference)
		.def_readwrite("CellTags", &FGFxDataStoreBinding::CellTags, py::return_value_policy::reference)
		.def_readwrite("ModelIdUtf8", &FGFxDataStoreBinding::ModelIdUtf8, py::return_value_policy::reference)
		.def_readwrite("ControlIdUtf8", &FGFxDataStoreBinding::ControlIdUtf8, py::return_value_policy::reference)
		.def_readwrite("ListDataProvider", &FGFxDataStoreBinding::ListDataProvider, py::return_value_policy::reference)
		.def_readwrite("UnknownData00[0x4]", &FGFxDataStoreBinding::UnknownData00[0x4])
		.def_readwrite("FullCellTags", &FGFxDataStoreBinding::FullCellTags, py::return_value_policy::reference)
		.def_readwrite("ModelRef", &FGFxDataStoreBinding::ModelRef, py::return_value_policy::reference)
		.def_readwrite("ControlRef", &FGFxDataStoreBinding::ControlRef, py::return_value_policy::reference)
		;
	py::class_< FExternalTexture >(m, "FExternalTexture")
		.def_readwrite("Resource", &FExternalTexture::Resource, py::return_value_policy::reference)
		.def_readwrite("Texture", &FExternalTexture::Texture, py::return_value_policy::reference)
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
		.def_readwrite("Multiply", &FASColorTransform::Multiply, py::return_value_policy::reference)
		.def_readwrite("Add", &FASColorTransform::Add, py::return_value_policy::reference)
		;
	py::class_< FEventData >(m, "FEventData")
		.def_readwrite("Type", &FEventData::Type, py::return_value_policy::reference)
		.def_readwrite("Data", &FEventData::Data)
		.def_readwrite("mouseIndex", &FEventData::mouseIndex)
		.def_readwrite("Button", &FEventData::Button)
		.def_readwrite("Index", &FEventData::Index)
		.def_readwrite("lastIndex", &FEventData::lastIndex)
		.def_readwrite("controllerIdx", &FEventData::controllerIdx)
		;
	py::class_< FGCReference >(m, "FGCReference")
		.def_readwrite("m_object", &FGCReference::m_object, py::return_value_policy::reference)
		.def_readwrite("m_count", &FGCReference::m_count)
		.def_readwrite("m_statid", &FGCReference::m_statid)
		;
	py::class_< FAkEventResolver >(m, "FAkEventResolver")
		.def_readwrite("Interaction", &FAkEventResolver::Interaction, py::return_value_policy::reference)
		.def_readwrite("AkEvent", &FAkEventResolver::AkEvent, py::return_value_policy::reference)
		;

}