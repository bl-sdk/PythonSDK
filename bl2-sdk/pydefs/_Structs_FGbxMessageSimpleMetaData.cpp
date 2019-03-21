#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGbxMessageSimpleMetaData()
{
    class_< FGbxMessageSimpleMetaData >("FGbxMessageSimpleMetaData", no_init)
        .def_readwrite("FloatData", &FGbxMessageSimpleMetaData::FloatData)
        .def_readwrite("IntData", &FGbxMessageSimpleMetaData::IntData)
        .def_readwrite("NameData", &FGbxMessageSimpleMetaData::NameData)
        .def_readwrite("VectorData", &FGbxMessageSimpleMetaData::VectorData)
  ;
}