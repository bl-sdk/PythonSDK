#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_SpawnTeleporter()
{
    class_< UPlayerBehavior_SpawnTeleporter, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_SpawnTeleporter", no_init)
        .def_readwrite("PersonalTeleporterDefinition", &UPlayerBehavior_SpawnTeleporter::PersonalTeleporterDefinition)
        .def("StaticClass", &UPlayerBehavior_SpawnTeleporter::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_SpawnTeleporter::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}