#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadableBalanceModifierDefinition()
{
    class_< UDownloadableBalanceModifierDefinition, bases< UDownloadableContentDefinition >  , boost::noncopyable>("UDownloadableBalanceModifierDefinition", no_init)
        .def_readwrite("BalanceModifier", &UDownloadableBalanceModifierDefinition::BalanceModifier)
        .def_readwrite("LevelCapIncrease", &UDownloadableBalanceModifierDefinition::LevelCapIncrease)
        .def_readwrite("ChallengeList", &UDownloadableBalanceModifierDefinition::ChallengeList)
        .def("StaticClass", &UDownloadableBalanceModifierDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}