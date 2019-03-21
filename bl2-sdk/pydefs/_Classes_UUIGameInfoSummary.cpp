#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIGameInfoSummary()
{
    py::class_< UUIGameInfoSummary,  UUIResourceDataProvider   >("UUIGameInfoSummary")
        .def_readwrite("ClassName", &UUIGameInfoSummary::ClassName)
        .def_readwrite("GameAcronym", &UUIGameInfoSummary::GameAcronym)
        .def_readwrite("MapPrefix", &UUIGameInfoSummary::MapPrefix)
        .def_readwrite("GameSettingsClassName", &UUIGameInfoSummary::GameSettingsClassName)
        .def_readwrite("GameName", &UUIGameInfoSummary::GameName)
        .def_readwrite("Description", &UUIGameInfoSummary::Description)
        .def("StaticClass", &UUIGameInfoSummary::StaticClass, py::return_value_policy::reference)
        .def("eventIsProviderDisabled", &UUIGameInfoSummary::eventIsProviderDisabled)
        .staticmethod("StaticClass")
  ;
}