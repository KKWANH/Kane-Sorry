#include			"mygif.h"

char				*ft_charappend(char *line, char buff)
{
	int				idx;
	char			*rst;

	idx = 0;
	if (!(rst = (char *)malloc(sizeof(char) * (strlen(line) + 2))))
		return (NULL);
	while (line[idx])
	{
		rst[idx] = line[idx];
		++idx;
	}
	rst[idx] = buff;
	++idx;
	rst[idx] = 0;
	free(line);
	return (rst);
}

void				ft_write_file(char *nam)
{
	int				fil;
	char			buf;
	char			*str;

	str = strdup("");
	fil = open(nam, O_RDONLY);
	while (read(fil, &buf, 1) > 0)
		str = ft_charappend(str, buf);
	printf("%s", str);
	close(fil);
	usleep(5000);
}

void				ft_go_up(int cnt)
{
	while (cnt > 0)
	{
		write(1, "\033[A", 3);
		--cnt;
	}
}

int					main(void)
{
	ft_write_file("./images/00.ans");
	ft_go_up(34);
	ft_write_file("./images/01.ans");
	ft_go_up(34);
	ft_write_file("./images/02.ans");
	ft_go_up(34);
	ft_write_file("./images/03.ans");
	ft_go_up(34);
	ft_write_file("./images/04.ans");
	ft_go_up(34);
	ft_write_file("./images/05.ans");
	ft_go_up(34);
	ft_write_file("./images/06.ans");
	ft_go_up(34);
	ft_write_file("./images/07.ans");
	ft_go_up(34);
	ft_write_file("./images/08.ans");
	ft_go_up(34);
	ft_write_file("./images/09.ans");
	ft_go_up(34);
	ft_write_file("./images/10.ans");
	ft_go_up(34);
	ft_write_file("./images/11.ans");
	ft_go_up(34);
	ft_write_file("./images/12.ans");
	ft_go_up(34);
	ft_write_file("./images/13.ans");
	ft_go_up(34);
	ft_write_file("./images/14.ans");
	ft_go_up(34);
	ft_write_file("./images/15.ans");
}