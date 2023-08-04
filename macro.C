#include "TAxis.h"
#include "TCanvas.h"
#include "TF1.h"
#include "TH1C.h"
#include "TStyle.h"
#include <iostream>

void attack_nearest()
{
  TCanvas* canvas =
      new TCanvas("canvas", "Attack nearest", 1400, 1000);
  gStyle->SetCanvasColor(0);
  gStyle->SetStatBorderSize(1);
  canvas->SetGrid(true);
  canvas->Divide(2, 1);
  canvas->cd(1);

  std::string const filename{"individuale_0.txt"};
  std::ifstream file{filename};
  std::string null;
  std::getline(file, null);
  TH1C* histo = new TH1C("histo", "Solitario", 120, 1, 120);
  for (int c; file >> c; histo->Fill(c))
    ;
  histo->GetXaxis()->SetTitle("Numero di prede catturate");
  histo->GetYaxis()->SetTitle("Occorrenze");
  histo->SetFillColor(kAzure + 2);
  histo->Draw("HIST");


  canvas->cd(2);
  std::string const filename2{"sociale_0.txt"};
  std::ifstream file2{filename2};
  std::string null2;
  std::getline(file2, null2);
  TH1C* histo2 = new TH1C("histo", "Socievole", 120, 1, 120);
  for (int c; file2 >> c; histo2->Fill(c))
    ;
  histo2->GetXaxis()->SetTitle("Numero di prede catturate");
  histo2->GetYaxis()->SetTitle("Occorrenze");
  histo2->SetFillColor(kOrange + 2);
  histo2->Draw("HIST");

  canvas->Print((filename + ".pdf").c_str());
}


void attack_isolated()
{
  TCanvas* canvas =
      new TCanvas("canvas", "Attack isolated", 1400, 1000);
  gStyle->SetCanvasColor(0);
  gStyle->SetStatBorderSize(1);
  canvas->SetGrid(true);
  canvas->Divide(2, 1);
  canvas->cd(1);

  std::string const filename{"individuale_1.txt"};
  std::ifstream file{filename};
  std::string null;
  std::getline(file, null);
  TH1C* histo = new TH1C("histo", "Solitario", 120, 1, 120);
  for (int c; file >> c; histo->Fill(c))
    ;
  histo->GetXaxis()->SetTitle("Numero di prede catturate");
  histo->GetYaxis()->SetTitle("Occorrenze");
  histo->SetFillColor(kAzure + 2);
  histo->Draw("HIST");


  canvas->cd(2);
  std::string const filename2{"sociale_1.txt"};
  std::ifstream file2{filename2};
  std::string null2;
  std::getline(file2, null2);
  TH1C* histo2 = new TH1C("histo", "Socievole", 120, 1, 120);
  for (int c; file2 >> c; histo2->Fill(c))
    ;
  histo2->GetXaxis()->SetTitle("Numero di prede catturate");
  histo2->GetYaxis()->SetTitle("Occorrenze");
  histo2->SetFillColor(kOrange + 2);
  histo2->Draw("HIST");
  
  canvas->Print((filename + ".pdf").c_str());
}