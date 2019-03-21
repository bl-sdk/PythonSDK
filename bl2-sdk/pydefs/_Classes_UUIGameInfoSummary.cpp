#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIGameInfoSummary()
{
    class_< UUIGameInfoSummary, bases< UUIResourceDataProvider >  , boost::noncopyable>("UUIGameInfoSummary", no_init)
        .def_readwrite("ClassName", &UUIGameInfoSummary::ClassName)
        .def_readwrite("GameAcronym", &UUIGameInfoSummary::GameAcronym)
        .def_readwrite("MapPrefix", &UUIGameInfoSummary::MapPrefix)
        .def_readwrite("GameSettingsClassName", &UUIGameInfoSummary::GameSettingsClassName)
        .def_readwrite("GameName", &UUIGameInfoSummary::GameName)
        .def_readwrite("Description", &UUIGameInfoSummary::Description)
        .def("StaticClass", &UUIGameInfoSummary::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventIsProviderDisabled", &UUIGameInfoSummary::eventIsProviderDisabled)
        .staticmethod("StaticClass")
  ;
}