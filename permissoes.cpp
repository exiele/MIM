#include "permissoes.h"
#include "ui_permissoes.h"

permissoes::permissoes(QWidget *parent, QString clicou) :
    QDialog(parent),
    ui(new Ui::permissoes)

{
    ui->setupUi(this);
    tipo = clicou;
}

permissoes::~permissoes()
{
    delete ui;
}

void permissoes::on_cancelar_clicked()
{
    this->close();
}
QString permissoes::BoolToString(bool b){
    return b ? "true" : "false";
}
void permissoes::on_Aplicar_clicked()
{
     grupo = ui->lineEdit->text();
     alterarsenha = BoolToString( ui->checkBox->isChecked());
     consultapermissoes = BoolToString(ui->checkBox_59->isChecked());
     inserepermissoes = BoolToString(ui->checkBox_60->isChecked());
     editapermissoes= BoolToString(ui->checkBox_61->isChecked());
     visualizapermissoes= BoolToString(ui->checkBox_62->isChecked());
     excluipermissoes= BoolToString(ui->checkBox_63->isChecked());
     relatoriopermissoes= BoolToString(ui->checkBox_64->isChecked());
     consultapessoal= BoolToString(ui->checkBox_71->isChecked());
     inserepessoal= BoolToString(ui->checkBox_72->isChecked());
     editapessoal= BoolToString(ui->checkBox_73->isChecked());
     visualizapessoal= BoolToString(ui->checkBox_74->isChecked());
     excluipessoal= BoolToString(ui->checkBox_75->isChecked());
     relatoriopessoal= BoolToString(ui->checkBox_76->isChecked());
     consultasetor= BoolToString(ui->checkBox_65->isChecked());
     inseresetor= BoolToString(ui->checkBox_66->isChecked());
     editasetor= BoolToString(ui->checkBox_67->isChecked());
     visualizasetor= BoolToString(ui->checkBox_68->isChecked());
     excluisetor= BoolToString(ui->checkBox_69->isChecked());
     relatoriosetor= BoolToString(ui->checkBox_70->isChecked());
     consultauf= BoolToString(ui->checkBox_77->isChecked());
     insereuf= BoolToString(ui->checkBox_78->isChecked());
     editauf= BoolToString(ui->checkBox_79->isChecked());
     visualizauf= BoolToString(ui->checkBox_80->isChecked());
     excluiuf= BoolToString(ui->checkBox_81->isChecked());
     relatoriouf= BoolToString(ui->checkBox_82->isChecked());
     consultamunicipio= BoolToString(ui->checkBox_83->isChecked());
     inseremunicipio= BoolToString(ui->checkBox_84->isChecked());
     editamunicipio= BoolToString(ui->checkBox_85->isChecked());
     visualizamunicipio= BoolToString(ui->checkBox_86->isChecked());
     excluimunicipio= BoolToString(ui->checkBox_87->isChecked());
     relatoriomunicipio= BoolToString(ui->checkBox_88->isChecked());
     consultacep= BoolToString(ui->checkBox_89->isChecked());
     inserecep= BoolToString(ui->checkBox_90->isChecked());
     editacep= BoolToString(ui->checkBox_91->isChecked());
     visualizacep= BoolToString(ui->checkBox_92->isChecked());
     excluicep= BoolToString(ui->checkBox_93->isChecked());
     relatoriocep= BoolToString(ui->checkBox_94->isChecked());
     consultafabricante= BoolToString(ui->checkBox_95->isChecked());
     inserefabricante= BoolToString(ui->checkBox_96->isChecked());
     editafabricante= BoolToString(ui->checkBox_97->isChecked());
     visualizafabricante= BoolToString(ui->checkBox_98->isChecked());
     excluifabricante= BoolToString(ui->checkBox_99->isChecked());
     relatoriofabricante= BoolToString(ui->checkBox_100->isChecked());
     consultafornecedor= BoolToString(ui->checkBox_101->isChecked());
     inserefornecedor= BoolToString(ui->checkBox_102->isChecked());
     editafornecedor= BoolToString(ui->checkBox_103->isChecked());
     visualizafornecedor= BoolToString(ui->checkBox_104->isChecked());
     excluifornecedor= BoolToString(ui->checkBox_105->isChecked());
     relatoriofornecedor= BoolToString(ui->checkBox_106->isChecked());
     consultaproduto= BoolToString(ui->checkBox_107->isChecked());
     insereproduto= BoolToString(ui->checkBox_108->isChecked());
     editaproduto= BoolToString(ui->checkBox_109->isChecked());
     visualizaproduto= BoolToString(ui->checkBox_110->isChecked());
     excluiproduto= BoolToString(ui->checkBox_111->isChecked());
     relatorioproduto= BoolToString(ui->checkBox_112->isChecked());
     consultatipoproduto= BoolToString(ui->checkBox_119->isChecked());
     inseretipoproduto= BoolToString(ui->checkBox_120->isChecked());
     editatipoproduto= BoolToString(ui->checkBox_121->isChecked());
     visualizatipoproduto= BoolToString(ui->checkBox_122->isChecked());
     excluitipoproduto= BoolToString(ui->checkBox_123->isChecked());
     relatoriotipoproduto= BoolToString(ui->checkBox_124->isChecked());
     consultaapresentacao= BoolToString(ui->checkBox_113->isChecked());
     insereapresentacao= BoolToString(ui->checkBox_114->isChecked());
     editaapresentacao= BoolToString(ui->checkBox_115->isChecked());
     visualizaapresentacao= BoolToString(ui->checkBox_116->isChecked());
     excluiapresentacao= BoolToString(ui->checkBox_117->isChecked());
     relatorioapresentacao= BoolToString(ui->checkBox_118->isChecked());
     consultaformafarmaceutica= BoolToString(ui->checkBox_149->isChecked());
     insereformafarmaceutica= BoolToString(ui->checkBox_150->isChecked());
     editaformafarmaceutica= BoolToString(ui->checkBox_151->isChecked());
     visualizaformafarmaceutica= BoolToString(ui->checkBox_152->isChecked());
     excluiformafarmaceutica= BoolToString(ui->checkBox_153->isChecked());
     relatorioformafarmaceutica= BoolToString(ui->checkBox_154->isChecked());
     consultaclassificacaoterapeutica= BoolToString(ui->checkBox_125->isChecked());
     insereclassificacaoterapeutica= BoolToString(ui->checkBox_126->isChecked());
     editaclassificacaoterapeutica= BoolToString(ui->checkBox_127->isChecked());
     visualizaclassificacaoterapeutica= BoolToString(ui->checkBox_128->isChecked());
     excluiclassificacaoterapeutica= BoolToString(ui->checkBox_129->isChecked());
     relatorioclassificacaoterapeutica= BoolToString(ui->checkBox_130->isChecked());
     consultaprincipioativo= BoolToString(ui->checkBox_143->isChecked());
     insereprincipioativo= BoolToString(ui->checkBox_144->isChecked());
     editaprincipioativo= BoolToString(ui->checkBox_145->isChecked());
     visualizaprincipioativo= BoolToString(ui->checkBox_146->isChecked());
     excluiprincipioativo= BoolToString(ui->checkBox_147->isChecked());
     relatorioprincipioativo= BoolToString(ui->checkBox_148->isChecked());
     consultaunidadeconcentracao= BoolToString(ui->checkBox_197->isChecked());
     insereunidadeconcentracao= BoolToString(ui->checkBox_198->isChecked());
     editaunidadeconcentracao= BoolToString(ui->checkBox_199->isChecked());
     visualizaunidadeconcentracao= BoolToString(ui->checkBox_200->isChecked());
     excluiunidadeconcentracao= BoolToString(ui->checkBox_201->isChecked());
     relatoriounidadeconcentracao= BoolToString(ui->checkBox_202->isChecked());
     consultaprodutoprincipioativo= BoolToString(ui->checkBox_173->isChecked());
     insereprodutoprincipioativo= BoolToString(ui->checkBox_174->isChecked());
     editaprodutoprincipioativo= BoolToString(ui->checkBox_175->isChecked());
     visualizaprodutoprincipioativo= BoolToString(ui->checkBox_176->isChecked());
     excluiprodutoprincipioativo= BoolToString(ui->checkBox_177->isChecked());
     relatorioprodutoprincipioativo= BoolToString(ui->checkBox_178->isChecked());
     consultapaintpa= BoolToString(ui->checkBox_155->isChecked());
     inserepaintpa= BoolToString(ui->checkBox_156->isChecked());
     editapaintpa= BoolToString(ui->checkBox_157->isChecked());
     visualizapaintpa= BoolToString(ui->checkBox_158->isChecked());
     excluipaintpa= BoolToString(ui->checkBox_159->isChecked());
     relatoriopaintpa= BoolToString(ui->checkBox_160->isChecked());
     consultainteracao= BoolToString(ui->checkBox_161->isChecked());
     insereinteracao= BoolToString(ui->checkBox_162->isChecked());
     editainteracao= BoolToString(ui->checkBox_163->isChecked());
     visualizainteracao= BoolToString(ui->checkBox_164->isChecked());
     excluiinteracao= BoolToString(ui->checkBox_165->isChecked());
     relatoriointeracao= BoolToString(ui->checkBox_166->isChecked());
     consultabibliografia= BoolToString(ui->checkBox_167->isChecked());
     inserebibliografia= BoolToString(ui->checkBox_168->isChecked());
     editabibliografia= BoolToString(ui->checkBox_169->isChecked());
     visualizabibliografia= BoolToString(ui->checkBox_170->isChecked());
     excluibibliografia= BoolToString(ui->checkBox_171->isChecked());
     relatoriobibliografia= BoolToString(ui->checkBox_172->isChecked());
     consultaestoqueminimo= BoolToString(ui->checkBox_137->isChecked());
     insereestoqueminimo= BoolToString(ui->checkBox_138->isChecked());
     editaestoqueminimo= BoolToString(ui->checkBox_139->isChecked());
     visualizaestoqueminimo= BoolToString(ui->checkBox_140->isChecked());
     excluiestoqueminimo= BoolToString(ui->checkBox_141->isChecked());
     relatorioestoqueminimo= BoolToString(ui->checkBox_142->isChecked());
     consultamodalidadecompra= BoolToString(ui->checkBox_131->isChecked());
     inseremodalidadecompra= BoolToString(ui->checkBox_132->isChecked());
     editamodalidadecompra= BoolToString(ui->checkBox_133->isChecked());
     visualizamodalidadecompra= BoolToString(ui->checkBox_134->isChecked());
     excluimodalidadecompra= BoolToString(ui->checkBox_135->isChecked());
     relatoriomodalidadecompra= BoolToString(ui->checkBox_136->isChecked());
     consultaalergias= BoolToString(ui->checkBox_185->isChecked());
     inserealergias= BoolToString(ui->checkBox_186->isChecked());
     editaalergias= BoolToString(ui->checkBox_187->isChecked());
     visualizaalergias= BoolToString(ui->checkBox_188->isChecked());
     excluialergias= BoolToString(ui->checkBox_189->isChecked());
     relatorioalergias= BoolToString(ui->checkBox_190->isChecked());
     consultacid10= BoolToString(ui->checkBox_191->isChecked());
     inserecid10= BoolToString(ui->checkBox_192->isChecked());
     editacid10= BoolToString(ui->checkBox_193->isChecked());
     visualizacid10= BoolToString(ui->checkBox_194->isChecked());
     excluicid10= BoolToString(ui->checkBox_195->isChecked());
     relatoriocid10= BoolToString(ui->checkBox_196->isChecked());
     consultarequisicao= BoolToString(ui->checkBox_16->isChecked());
     insererequisicao= BoolToString(ui->checkBox_17->isChecked());
     editarequisicao= BoolToString(ui->checkBox_18->isChecked());
     visualizarequisicao= BoolToString(ui->checkBox_19->isChecked());
     excluirequisicao= BoolToString(ui->checkBox_20->isChecked());
     relatoriorequisicao= BoolToString(ui->checkBox_21->isChecked());
     consultaatendimentorequisicao= BoolToString(ui->checkBox_22->isChecked());
     insereatendimentorequisicao= BoolToString(ui->checkBox_23->isChecked());
     editaatendimentorequisicao= BoolToString(ui->checkBox_24->isChecked());
     visualizaatendimentorequisicao= BoolToString(ui->checkBox_25->isChecked());
     excluiatendimentorequisicao= BoolToString(ui->checkBox_26->isChecked());
     relatorioatendimentorequisicao= BoolToString(ui->checkBox_27->isChecked());
     consultaentradamaterial= BoolToString(ui->checkBox_28->isChecked());
     insereentradamaterial= BoolToString(ui->checkBox_29->isChecked());
     editaentradamaterial= BoolToString(ui->checkBox_30->isChecked());
     visualizaentradamaterial= BoolToString(ui->checkBox_31->isChecked());
     excluientradamaterial= BoolToString(ui->checkBox_32->isChecked());
     relatorioentradamaterial= BoolToString(ui->checkBox_33->isChecked());
     consultaentradanf= BoolToString(ui->consultaNotaFiscalCB->isChecked());
     insereentradanf= BoolToString(ui->insereNotaFiscalCB->isChecked());
     editaentradanf= BoolToString(ui->editaNotaFiscalCB->isChecked());
     visualizaentradanf= BoolToString(ui->visualizaNotaFiscalCB->isChecked());
     excluientradanf= BoolToString(ui->excluiNotaFiscalCB->isChecked());
     relatorioentradanf= BoolToString(ui->relatorioNotaFiscalCB->isChecked());
     consultaestoque= BoolToString(ui->checkBox_10->isChecked());
     insereestoque= BoolToString(ui->checkBox_11->isChecked());
     editaestoque= BoolToString(ui->checkBox_12->isChecked());
     visualizaestoque= BoolToString(ui->checkBox_13->isChecked());
     excluiestoque= BoolToString(ui->checkBox_14->isChecked());
     relatorioestoque= BoolToString(ui->checkBox_15->isChecked());
     consultaajusteestoque= BoolToString(ui->checkBox_34->isChecked());
     insereajusteestoque= BoolToString(ui->checkBox_35->isChecked());
     editaajusteestoque= BoolToString(ui->checkBox_36->isChecked());
     visualizaajusteestoque= BoolToString(ui->checkBox_37->isChecked());
     excluiajusteestoque= BoolToString(ui->checkBox_38->isChecked());
     relatorioajusteestoque= BoolToString(ui->checkBox_39->isChecked());
     consultapaciente= BoolToString(ui->checkBox_40->isChecked());
     inserepaciente= BoolToString(ui->checkBox_41->isChecked());
     editapaciente= BoolToString(ui->checkBox_42->isChecked());
     visualizapaciente= BoolToString(ui->checkBox_43->isChecked());
     excluipaciente= BoolToString(ui->checkBox_44->isChecked());
     relatoriopaciente= BoolToString(ui->checkBox_45->isChecked());
     consultacontroleprescricao= BoolToString(ui->checkBox_46->isChecked());
     inserecontroleprescricao= BoolToString(ui->checkBox_47->isChecked());
     editacontroleprescricao= BoolToString(ui->checkBox_48->isChecked());
     visualizacontroleprescricao= BoolToString(ui->checkBox_49->isChecked());
     excluicontroleprescricao= BoolToString(ui->checkBox_50->isChecked());
     relatoriocontroleprescricao= BoolToString(ui->checkBox_51->isChecked());
     consultamotivo= BoolToString(ui->checkBox_203->isChecked());
     inseremotivo= BoolToString(ui->checkBox_204->isChecked());
     editamotivo= BoolToString(ui->checkBox_205->isChecked());
     visualizamotivo= BoolToString(ui->checkBox_206->isChecked());
     excluimotivo= BoolToString(ui->checkBox_207->isChecked());
     relatoriomotivo= BoolToString(ui->checkBox_208->isChecked());
     consultaatendimentoprescricao= BoolToString(ui->checkBox_52->isChecked());
     insereatendimentoprescricao= BoolToString(ui->checkBox_53->isChecked());
     editaatendimentoprescricao= BoolToString(ui->checkBox_54->isChecked());
     visualizaatendimentoprescricao= BoolToString(ui->checkBox_55->isChecked());
     excluiatendimentoprescricao= BoolToString(ui->checkBox_56->isChecked());
     relatorioatendimentoprescricao= BoolToString(ui->checkBox_57->isChecked());
     internacao_alta= BoolToString(ui->checkBox_58->isChecked());
     notificaprescricao= BoolToString(ui->checkBox_2->isChecked());
     logsistema= BoolToString(ui->checkBox_3->isChecked());

     query.prepare("INSERT INTO permissoes("
                       "grupo, alterarsenha, consultapermissoes, inserepermissoes, editapermissoes, visualizapermissoes, excluipermissoes, relatoriopermissoes, consultapessoal, "
                   "inserepessoal, editapessoal, visualizapessoal, excluipessoal, relatoriopessoal, consultasetor, inseresetor, editasetor, visualizasetor, excluisetor, relatoriosetor,"
                   " consultauf, insereuf, editauf, visualizauf, excluiuf, relatoriouf, consultamunicipio, inseremunicipio, editamunicipio, visualizamunicipio, excluimunicipio, "
                   "relatoriomunicipio, consultacep, inserecep, editacep, visualizacep, excluicep, relatoriocep, consultafabricante, inserefabricante, editafabricante, visualizafabricante, "
                   "excluifabricante, relatoriofabricante, consultafornecedor, inserefornecedor, editafornecedor, visualizafornecedor, excluifornecedor, relatoriofornecedor, consultaproduto, "
                   "insereproduto, editaproduto, visualizaproduto, excluiproduto, relatorioproduto, consultatipoproduto, inseretipoproduto, editatipoproduto, visualizatipoproduto, "
                   "excluitipoproduto, relatoriotipoproduto, consultaapresentacao, insereapresentacao, editaapresentacao, visualizaapresentacao, excluiapresentacao, relatorioapresentacao, "
                   "consultaformafarmaceutica, insereformafarmaceutica, editaformafarmaceutica, visualizaformafarmaceutica, excluiformafarmaceutica, relatorioformafarmaceutica,"
                   " consultaclassificacaoterapeutica, insereclassificacaoterapeutica, editaclassificacaoterapeutica, visualizaclassificacaoterapeutica, excluiclassificacaoterapeutica, "
                   "relatorioclassificacaoterapeutica, consultaprincipioativo, insereprincipioativo, editaprincipioativo, visualizaprincipioativo, excluiprincipioativo, relatorioprincipioativo, "
                   "consultaunidadeconcentracao, insereunidadeconcentracao, editaunidadeconcentracao, visualizaunidadeconcentracao, excluiunidadeconcentracao, relatoriounidadeconcentracao,"
                   " consultaprodutoprincipioativo, insereprodutoprincipioativo, editaprodutoprincipioativo, visualizaprodutoprincipioativo, excluiprodutoprincipioativo, "
                   "relatorioprodutoprincipioativo, consultapaintpa, inserepaintpa, editapaintpa, visualizapaintpa, excluipaintpa, relatoriopaintpa, consultainteracao, insereinteracao,"
                   " editainteracao, visualizainteracao, excluiinteracao, relatoriointeracao, consultabibliografia, inserebibliografia, editabibliografia, visualizabibliografia,"
                   " excluibibliografia, relatoriobibliografia, consultaestoqueminimo, insereestoqueminimo, editaestoqueminimo, visualizaestoqueminimo, excluiestoqueminimo, "
                   "relatorioestoqueminimo, consultamodalidadecompra, inseremodalidadecompra, editamodalidadecompra, visualizamodalidadecompra, excluimodalidadecompra, "
                   "relatoriomodalidadecompra, consultaalergias, inserealergias, editaalergias, visualizaalergias, excluialergias, relatorioalergias, consultacid10, inserecid10, "
                   "editacid10, visualizacid10, excluicid10, relatoriocid10, consultarequisicao, insererequisicao, editarequisicao, visualizarequisicao, excluirequisicao, "
                   "relatoriorequisicao, consultaatendimentorequisicao, insereatendimentorequisicao, editaatendimentorequisicao, visualizaatendimentorequisicao, excluiatendimentorequisicao, "
                   "relatorioatendimentorequisicao, consultaentradamaterial, insereentradamaterial, editaentradamaterial, visualizaentradamaterial, excluientradamaterial, "
                   "relatorioentradamaterial, consultaentradanf, insereentradanf, editaentradanf, visualizaentradanf, excluientradanf, relatorioentradanf, consultaestoque,"
                   " insereestoque, editaestoque, visualizaestoque, excluiestoque, relatorioestoque, consultaajusteestoque, insereajusteestoque, editaajusteestoque, visualizaajusteestoque, "
                   "excluiajusteestoque, relatorioajusteestoque, consultapaciente, inserepaciente, editapaciente, visualizapaciente, excluipaciente, relatoriopaciente, "
                   "consultacontroleprescricao, inserecontroleprescricao, editacontroleprescricao, visualizacontroleprescricao, excluicontroleprescricao, relatoriocontroleprescricao, "
                   "consultamotivo, inseremotivo, editamotivo, visualizamotivo, excluimotivo, relatoriomotivo, consultaatendimentoprescricao, insereatendimentoprescricao, "
                   "editaatendimentoprescricao, visualizaatendimentoprescricao, excluiatendimentoprescricao, relatorioatendimentoprescricao, internacao_alta, notificaprescricao, logsistema)"
                       "VALUES ('"+grupo+"', '"+alterarsenha+"', '"+consultapermissoes+"', '"+inserepermissoes+"', '"+editapermissoes+"', '"+visualizapermissoes+"', '"+excluipermissoes+"',"
                    " '"+relatoriopermissoes+"', '"+consultapessoal+"', '"+inserepessoal+"', '"+editapessoal+"', '"+visualizapessoal+"', '"+excluipessoal+"', '"+relatoriopessoal+"',"
                    " '"+consultasetor+"', '"+inseresetor+"', '"+editasetor+"', '"+visualizasetor+"', '"+excluisetor+"', '"+relatoriosetor+"', "
                    "'"+consultauf+"', '"+insereuf+"', '"+editauf+"', '"+visualizauf+"', '"+excluiuf+"', '"+relatoriouf+"', "
                     "'"+consultamunicipio+"', '"+inseremunicipio+"', '"+editamunicipio+"', '"+visualizamunicipio+"', '"+excluimunicipio+"', '"+relatoriomunicipio+"', "
                    "'"+consultacep+"', '"+inserecep+"', '"+editacep+"', '"+visualizacep+"', '"+excluicep+"', '"+relatoriocep+"', '"+consultafabricante+"', '"+inserefabricante+"', "
                     "'"+editafabricante+"', '"+visualizafabricante+"', '"+excluifabricante+"', '"+relatoriofabricante+"', '"+consultafornecedor+"', '"+inserefornecedor+"', '"+editafornecedor+""
                    "', '"+visualizafornecedor+"', '"+excluifornecedor+"', '"+relatoriofornecedor+"', '"+consultaproduto+"', '"+insereproduto+"', '"+editaproduto+"', '"+visualizaproduto+"', "
                    "'"+excluiproduto+"', '"+relatorioproduto+"', '"+consultatipoproduto+"', '"+inseretipoproduto+"', '"+editatipoproduto+"', '"+visualizatipoproduto+"', '"+excluitipoproduto+"'"
                    ", '"+relatoriotipoproduto+"', '"+consultaapresentacao+"', '"+insereapresentacao+"', '"+editaapresentacao+"', '"+visualizaapresentacao+"', '"+excluiapresentacao+"', "
                    "'"+relatorioapresentacao+"', '"+consultaformafarmaceutica+"', '"+insereformafarmaceutica+"', '"+editaformafarmaceutica+"', '"+visualizaformafarmaceutica+"', '"+excluiformafarmaceutica+"',"
                    " '"+relatorioformafarmaceutica+"', '"+consultaclassificacaoterapeutica+"', '"+insereclassificacaoterapeutica+"', '"+editaclassificacaoterapeutica+"', '"+visualizaclassificacaoterapeutica+"'"
                    ", '"+excluiclassificacaoterapeutica+"', '"+relatorioclassificacaoterapeutica+"', '"+consultaprincipioativo+"', '"+insereprincipioativo+"', '"+editaprincipioativo+"',"
                    " '"+visualizaprincipioativo+"', '"+excluiprincipioativo+"', '"+relatorioprincipioativo+"', '"+consultaunidadeconcentracao+"', '"+insereunidadeconcentracao+"', '"+editaunidadeconcentracao+"',"
                    " '"+visualizaunidadeconcentracao+"', '"+excluiunidadeconcentracao+"', '"+relatoriounidadeconcentracao+"', '"+consultaprodutoprincipioativo+"', '"+insereprodutoprincipioativo+"',"
                    " '"+editaprodutoprincipioativo+"', '"+visualizaprodutoprincipioativo+"', '"+excluiprodutoprincipioativo+"', '"+relatorioprodutoprincipioativo+"', '"+consultapaintpa+"', "
                    "'"+inserepaintpa+"', '"+editapaintpa+"', '"+visualizapaintpa+"', '"+excluipaintpa+"', '"+relatoriopaintpa+"', '"+consultainteracao+"', '"+insereinteracao+"', '"+editainteracao+"', "
                    "'"+visualizainteracao+"', '"+excluiinteracao+"', '"+relatoriointeracao+"', '"+consultabibliografia+"', '"+inserebibliografia+"', '"+editabibliografia+"', '"+visualizabibliografia+"',"
                    " '"+excluibibliografia+"', '"+relatoriobibliografia+"', '"+consultaestoqueminimo+"', '"+insereestoqueminimo+"', '"+editaestoqueminimo+"', '"+visualizaestoqueminimo+"', '"+excluiestoqueminimo+"'"
                    ", '"+relatorioestoqueminimo+"', '"+consultamodalidadecompra+"', '"+inseremodalidadecompra+"', '"+editamodalidadecompra+"', '"+visualizamodalidadecompra+"', '"+excluimodalidadecompra+"'"
                    ", '"+relatoriomodalidadecompra+"', '"+consultaalergias+"', '"+inserealergias+"', '"+editaalergias+"', '"+visualizaalergias+"', '"+excluialergias+"', '"+relatorioalergias+"'"
                    ", '"+consultacid10+"', '"+inserecid10+"', '"+editacid10+"', '"+visualizacid10+"', '"+excluicid10+"', '"+relatoriocid10+"', '"+consultarequisicao+"', '"+insererequisicao+"', "
                    "'"+editarequisicao+"', '"+visualizarequisicao+"', '"+excluirequisicao+"', '"+relatoriorequisicao+"', '"+consultaatendimentorequisicao+"', '"+insereatendimentorequisicao+"',"
                    " '"+editaatendimentorequisicao+"', '"+visualizaatendimentorequisicao+"', '"+excluiatendimentorequisicao+"', '"+relatorioatendimentorequisicao+"', '"+consultaentradamaterial+"', "
                    "'"+insereentradamaterial+"', '"+editaentradamaterial+"', '"+visualizaentradamaterial+"', '"+excluientradamaterial+"', '"+relatorioentradamaterial+"', '"+consultaentradanf+""
                    "', '"+insereentradanf+"', '"+editaentradanf+"', '"+visualizaentradanf+"', '"+excluientradanf+"', '"+relatorioentradanf+"', '"+consultaestoque+"', '"+insereestoque+"', "
                    "'"+editaestoque+"', '"+visualizaestoque+"', '"+excluiestoque+"', '"+relatorioestoque+"', '"+consultaajusteestoque+"', '"+insereajusteestoque+"', '"+editaajusteestoque+"'"
                    ", '"+visualizaajusteestoque+"', '"+excluiajusteestoque+"', '"+relatorioajusteestoque+"', '"+consultapaciente+"', '"+inserepaciente+"', '"+editapaciente+"', '"+visualizapaciente+"',"
                    " '"+excluipaciente+"', '"+relatoriopaciente+"', '"+consultacontroleprescricao+"', '"+inserecontroleprescricao+"', '"+editacontroleprescricao+"', '"+visualizacontroleprescricao+"',"
                    " '"+excluicontroleprescricao+"', '"+relatoriocontroleprescricao+"', '"+consultamotivo+"', '"+inseremotivo+"', '"+editamotivo+"', '"+visualizamotivo+"', '"+excluimotivo+"',"
                    " '"+relatoriomotivo+"', '"+consultaatendimentoprescricao+"', '"+insereatendimentoprescricao+"', '"+editaatendimentoprescricao+"', '"+visualizaatendimentoprescricao+""
                    "', '"+excluiatendimentoprescricao+"', '"+relatorioatendimentoprescricao+"', '"+internacao_alta+"', '"+notificaprescricao+"', '"+logsistema+"');");
     if(query.exec()){
         QMessageBox::information(this,"","<font size=16>Ação realizada com sucesso");
     }
     else{
         qDebug()<<query.lastError().text();
         qDebug()<<query.lastQuery();
     }
}
