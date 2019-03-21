#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USparkNews()
{
    class_< USparkNews, bases< UObject >  , boost::noncopyable>("USparkNews", no_init)
        .def_readwrite("Articles", &USparkNews::Articles)
        .def("StaticClass", &USparkNews::StaticClass, return_value_policy< reference_existing_object >())
        .def("Internal_GetService", &USparkNews::Internal_GetService, return_value_policy< reference_existing_object >())
        .def("CallAndClearRetrievedDelegate", &USparkNews::CallAndClearRetrievedDelegate)
        .def("ParseArticles", &USparkNews::ParseArticles)
        .def("HandleNewsRetrievalResponse", &USparkNews::HandleNewsRetrievalResponse)
        .def("GetArticle", &USparkNews::GetArticle)
        .def("GetArticleCount", &USparkNews::GetArticleCount)
        .def("RetrieveNews", &USparkNews::RetrieveNews)
        .def("OnNewsRetrieved", &USparkNews::OnNewsRetrieved)
        .staticmethod("StaticClass")
  ;
}