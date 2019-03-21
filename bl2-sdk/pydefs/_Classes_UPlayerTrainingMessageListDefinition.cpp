#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerTrainingMessageListDefinition()
{
    class_< UPlayerTrainingMessageListDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UPlayerTrainingMessageListDefinition", no_init)
        .def_readwrite("TrainingMessages", &UPlayerTrainingMessageListDefinition::TrainingMessages)
        .def("StaticClass", &UPlayerTrainingMessageListDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}