#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTrainingData()
{
    class_< FTrainingData >("FTrainingData", no_init)
        .def_readwrite("PCOwner", &FTrainingData::PCOwner)
        .def_readwrite("TrainingDefinition", &FTrainingData::TrainingDefinition)
  ;
}